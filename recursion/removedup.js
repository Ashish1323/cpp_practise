var remove=(str) => {
    if(str.length==0) return ""
    var c=str[0]
    var ans=remove(str.substr(1))
    if(c=="x") return ans+"x"
    else return c+ans;
}

console.log(remove("aacnjackxnaxxankjaxnkjcnakdn"))