var a=[1,2,2,5,6]

var sorted = (a,i,n) =>{
    if(n==1) return true
    return a[i]< a[i+1] && sorted(a,i+1,n-1)
}

console.log(sorted(a,0,5))