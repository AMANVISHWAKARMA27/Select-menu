const title = document.querySelector('Min-heaing');
title.style.color = 'red';

const listItems = document.querySelectorAll('list-item');
listItems.style.fontSize = '10px';

for ( i = 0; i < listItems.length; i++ ){
    listItems[i].style.fontSize = '3px';
}

const ul = document.querySelector('ul');
const li =document.createElement('li');

ul.append(li)//to add the new element into the document

const firstListItem = document.querySelector('list-item');
li.innerHTML = ' X-men'