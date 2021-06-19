var anagram=(str1,str2) => {
    if(str1.length!=str2.length) return false
    if(str1===str2) return true

    var map1=new Map()
    var map2=new Map()
    for(var i of str1){
        if(!map1.has(i)) map1.set(i,0)
        var value=map1.get(i)
        value+=1
        map1.set(i,value)
    }
    for(var i of str2){
        if(!map2.has(i)) map2.set(i,0)
        var value=map2.get(i)
        value+=1
        map2.set(i,value)
    }
    var res1=[...map1.keys()]
    var res2=[...map2.keys()]
    console.log(res1,res2)
    //for (let k of map1.keys())

    for(var i of str1){
        if(map1.get(i) != map2.get(i)) return false
    }
    return true
    //return res1.sort().split("")
    // console.log(res1.sort((a,b)=>a[1]-b[1]).toString())
    // console.log(res2.sort((a,b)=>a[1]-b[1]).toString())
    //return res1.sort((a,b)=>a[1]-b[1]).toString()==res2.sort((a,b)=>a[1]-b[1]).toString()
}



// var anagram2 =(n1,n2) => {
//     return n1.split('').sort().join('')==n2.split('').sort().join('')
// }

console.log(anagram("abcd","badc"))

//aab aba
var array=[-2, -3, 4, -1, -2, 1, 5, -3]

var kadenes=(arr) => {
    var max=-Infinity;
    var currentMax=0;
    var sub=0;
    var index=[]

    for(i=0;i<arr.length;i++){
        sub+=arr[i]
        if(sub<0) sub=0
        if(sub>currentMax){
            currentMax=sub
            index.push(i)
        }
        //currentMax=Math.max(currentMax,sub)
        //console.log(index)
        max=Math.max(currentMax,max)
    }
    return max
}
console.log(kadenes(array))
//console.log(start)