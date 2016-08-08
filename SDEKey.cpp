/*  (    (           
 *  )\ ) )\ )        
 *  (()/((()/(   (    
 *  /(_))/(_))  )\   
 *  (_)) (_))_  ((_)  
 *  / __| |   \ | __| 
 *  \__ \ | |) || _|  
 *  |___/ |___/ |___| 
 *
 * Project: SDEKey Type
 * Author: Sam Andersen
 * Version: 20160808
 * TODO: Continue adding functionality
 */

SDEKey::SDEKey() {
	sessionKey = "0";
}

SDEKey::~SDEKey() {
	sessionKey.clear();
}