#ifndef RECTANGLE_INTERFACE_
#define RECTANGLE_INTERFACE_

//  Listing 2
/** @file RectangleInterface.h */

class RectangleInterface
{
public:
	/** Updates the Length of this Rectangle
	 @param  newWidth the new Length for this Rectangle
	 @pre    newWidth must be larger than zero
	 @post   If newWidth is valid, the Length
	         of this object is set to newWidth
			 Otherwise, the Rectangle is not updated 
	 @return  True if this object is updated,
	          and false otherwise. */ 
    /** Updates the width of this Rectangle
	 @param  newWidth the new width for this Rectangle
	 @pre    newWidth must be larger than zero
	 @post   If newWidth is valid, the width
	         of this object is set to newWidth
			 Otherwise, the Rectangle is not updated 
	 @return  True if this object is updated,
	          and false otherwise. */ 

	virtual void set(double newWidth, double newLength) = 0;
	
	/** Gets the Length  of this Rectangle
	 @return The Length of this Rectangle. */
	virtual double getLength() const = 0;
	
	/** Gets the area  of this Rectangle
	 @return The area of this Rectangle. */
	virtual double getArea() const = 0;

    	/** Gets the Width  of this Rectangle
	 @return The Witdth of this Rectangle. */
	virtual double getWidth() const = 0;

	/** Destroys this Rectangle and frees its assigned memory. */
	virtual ~RectangleInterface() {}
};
#endif
