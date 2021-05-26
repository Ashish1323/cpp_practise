var first =(a,i,n,key) => {
    if(i==n) return -1;
    if(a[i]===key) return i+1;
    return first(a,i+1,n,key)
}



console.log(first([1,2,3,2,5],0,5,2))