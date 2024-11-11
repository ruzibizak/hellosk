function solution(number){
    if(number<0){
      return 0;
    }
    let sum =0;
    for(let i=0; i<number; i++){
      if(i%3==0 || i%5==0){
        sum=sum+i;
        console.log(i);
      }
      
    }
    console.log('sum is ' +sum);
    
  }

  solution(10);
  function descendingOrder(n){
    return parseInt(n.toString().split('').sort((a,b) => b-a).join(''),10);
  }

// Example usage:
console.log(descendingOrder(42145));  // Output will be 54421

function squareDigits(num) {
    return parseInt(num.toString().split('').map(digit => digit ** 2).join(''), 10);
}


function filterList(list) {
    // Filter out the strings by checking if the type is 'number'
    return list.filter(item => typeof item === 'number');
}