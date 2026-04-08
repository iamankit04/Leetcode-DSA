type JSONValue = null | boolean | number | string | JSONValue[] | { [key: string]: JSONValue };

function argumentsLength(...args: JSONValue[]): number {

    let a : number ; 
    a = args.length ; 

    return a ; 
    
};

/**
 * argumentsLength(1, 2, 3); // 3
 */