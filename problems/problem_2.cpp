float problemSolution2(float i, float j, float k) {
    float result;
    // write your code here;
    cin>>i>>j>>k;
    if(i>j && i>k) {
        cout << " The maximum number is " << i << endl;
    }else if( j>i && j>k) {
        cout << "The maximum number is " << j << endl;
    }else{
        cout<<" The maximum number is "<< k<< endl;
    }

    return 0;
}

    return result;
}
