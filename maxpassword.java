import javax.swing.plaf.basic.BasicInternalFrameTitlePane.MaximizeAction;

public class Solution{
	public static void main(String[] args){
		System.out.println("hello kufli");
		System.out.println(maxPassword("jaffa0Aaja00000JAFFFFFFFA"));
	}
	public static String maxPassword(String str){
		int maxsum=0,newsum=0;
		String maxarray=new String();
		StringBuilder newarray=new StringBuilder();
		for(int i=0;i<str.length();i++){
			char ch=str.charAt(i);
			if(!Character.isDigit(ch)){
				newarray.append(ch);
				newsum+=i;
			}
			else{
				newsum=0;
				newarray=new StringBuilder();
			}
			if(newsum>maxsum&&checkString(newarray.toString())){
				maxsum=newsum;
				maxarray=newarray.toString();
			}
			
		}
		//System.out.println(newarray);
		return maxarray;
	}
	private static boolean checkString(String str) {
	    char ch;
	    boolean capitalFlag = false;
	    boolean lowerCaseFlag = false;
	    boolean numberFlag = false;
	    for(int i=0;i < str.length();i++) {
	        ch = str.charAt(i);
	        if( Character.isDigit(ch)) {
	            numberFlag = true;
	        }
	        else if (Character.isUpperCase(ch)) {
	            capitalFlag = true;
	        } else if (Character.isLowerCase(ch)) {
	            lowerCaseFlag = true;
	        }
	        if(capitalFlag)
	            return true;
	    }
	    return false;
	}
}
