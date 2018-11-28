/*******************************************************************************
 * The MIT License (MIT)
 * 
 * Copyright (c) 2015 Jean-David Gadina - www.xs-labs.com / www.digidna.net
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 ******************************************************************************/

/*!
 * @copyright   (c) 2015 - Jean-David Gadina - www.xs-labs.com
 * @brief       Test case XS::TypeTraits
 */

#define XSTEST_GTEST_COMPAT
#define XSTEST_MAIN
#include <XSTest/XSTest.hpp>
#include <XS/TypeTraits.hpp>

class C1
{
    public:
        
        C1( const C1 & o )
        {
            ( void )o;
        }
        
        C1 & operator =( const C1 & o )
        {
            ( void )o;
            
            return *( this );
        }
        
        C1 & operator +=( const C1 & o )
        {
            ( void )o;
            
            return *( this );
        }
        
        C1 & operator -=( const C1 & o )
        {
            ( void )o;
            
            return *( this );
        }
        
        C1 & operator *=( const C1 & o )
        {
            ( void )o;
            
            return *( this );
        }
        
        C1 & operator /=( const C1 & o )
        {
            ( void )o;
            
            return *( this );
        }
        
        C1 & operator %=( const C1 & o )
        {
            ( void )o;
            
            return *( this );
        }
        
        C1 & operator &=( const C1 & o )
        {
            ( void )o;
            
            return *( this );
        }
        
        C1 & operator |=( const C1 & o )
        {
            ( void )o;
            
            return *( this );
        }
        
        C1 & operator ^=( const C1 & o )
        {
            ( void )o;
            
            return *( this );
        }
        
        C1 & operator <<=( const C1 & o )
        {
            ( void )o;
            
            return *( this );
        }
        
        C1 & operator >>=( const C1 & o )
        {
            ( void )o;
            
            return *( this );
        }
        
        C1 & operator ++( void )
        {
            return *( this );
        }
        
        C1 & operator --( void )
        {
            return *( this );
        }
        
        C1 operator ++( int i )
        {
            ( void )i;
            
            return *( this );
        }
        
        C1 operator --( int i )
        {
            ( void )i;
            
            return *( this );
        }
        
        C1 operator +( void ) const
        {
            return *( this );
        }
        
        C1 operator -( void ) const
        {
            return *( this );
        }
        
        C1 operator +( const C1 & o ) const
        {
            ( void )o;
            
            return *( this );
        }
        
        C1 operator -( const C1 & o ) const
        {
            ( void )o;
            
            return *( this );
        }
        
        C1 operator *( const C1 & o ) const
        {
            ( void )o;
            
            return *( this );
        }
        
        C1 operator /( const C1 & o ) const
        {
            ( void )o;
            
            return *( this );
        }
        
        C1 operator %( const C1 & o ) const
        {
            ( void )o;
            
            return *( this );
        }
        
        C1 operator ~( void ) const
        {
            return *( this );
        }
        
        C1 operator &( const C1 & o ) const
        {
            ( void )o;
            
            return *( this );
        }
        
        C1 operator |( const C1 & o ) const
        {
            ( void )o;
            
            return *( this );
        }
        
        C1 operator ^( const C1 & o ) const
        {
            ( void )o;
            
            return *( this );
        }
        
        C1 operator <<( const C1 & o ) const
        {
            ( void )o;
            
            return *( this );
        }
        
        C1 operator >>( const C1 & o ) const
        {
            ( void )o;
            
            return *( this );
        }
        
        bool operator !( void ) const
        {
            return false;
        }
        
        bool operator &&( const C1 & o ) const
        {
            ( void )o;
            
            return false;
        }
        
        bool operator ||( const C1 & o ) const
        {
            ( void )o;
            
            return false;
        }
        
        bool operator ==( const C1 & o ) const
        {
            ( void )o;
            
            return false;
        }
        
        bool operator !=( const C1 & o ) const
        {
            ( void )o;
            
            return false;
        }
        
        bool operator <( const C1 & o ) const
        {
            ( void )o;
            
            return false;
        }
        
        bool operator >( const C1 & o ) const
        {
            ( void )o;
            
            return false;
        }
        
        bool operator <=( const C1 & o ) const
        {
            ( void )o;
            
            return false;
        }
        
        bool operator >=( const C1 & o ) const
        {
            ( void )o;
            
            return false;
        }
        
        C1 & operator []( int x )
        {
            ( void )x;
            
            return *( this );
        }
        
        C1 & operator *( void )
        {
            return *( this );
        }
        
        C1 * operator &( void )
        {
            return this;
        }
        
        C1 * operator ->( void )
        {
            return this;
        }
        
        C1 & operator ->*( int x )
        {
            ( void )x;
            
            return *( this );
        }
        
        void operator ()( void )
        {}
        
        void operator ()( int x )
        {
            ( void )x;
        }
};

class C2
{
    private:
        
        C2 & operator =( const C2 & o )
        {
            ( void )o;
            
            return *( this );
        }
};

TEST( XS_TypeTraits, HasSimpleAssignmentOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasSimpleAssignmentOperator< C1, C1 &, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasSimpleAssignmentOperator< C2, C2 &, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasAdditionAssignmentOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasAdditionAssignmentOperator< C1, C1 &, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasAdditionAssignmentOperator< C2, C2 &, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasSubtractionAssignmentOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasSubtractionAssignmentOperator< C1, C1 &, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasSubtractionAssignmentOperator< C2, C2 &, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasMultiplicationAssignmentOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasMultiplicationAssignmentOperator< C1, C1 &, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasMultiplicationAssignmentOperator< C2, C2 &, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasDivisionAssignmentOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasDivisionAssignmentOperator< C1, C1 &, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasDivisionAssignmentOperator< C2, C2 &, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasModuloAssignmentOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasModuloAssignmentOperator< C1, C1 &, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasModuloAssignmentOperator< C2, C2 &, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasBitwiseANDAssignmentOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasBitwiseANDAssignmentOperator< C1, C1 &, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasBitwiseANDAssignmentOperator< C2, C2 &, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasBitwiseORAssignmentOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasBitwiseORAssignmentOperator< C1, C1 &, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasBitwiseORAssignmentOperator< C2, C2 &, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasBitwiseXORAssignmentOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasBitwiseXORAssignmentOperator< C1, C1 &, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasBitwiseXORAssignmentOperator< C2, C2 &, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasBitwiseLeftShiftAssignmentOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasBitwiseLeftShiftAssignmentOperator< C1, C1 &, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasBitwiseLeftShiftAssignmentOperator< C2, C2 &, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasBitwiseRightShiftAssignmentOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasBitwiseRightShiftAssignmentOperator< C1, C1 &, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasBitwiseRightShiftAssignmentOperator< C2, C2 &, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasPreIncrementOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasPreIncrementOperator< C1, C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasPreIncrementOperator< C2, C2 & >::value ) );
}

TEST( XS_TypeTraits, HasPreDecrementOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasPreDecrementOperator< C1, C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasPreDecrementOperator< C2, C2 & >::value ) );
}

TEST( XS_TypeTraits, HasPostIncrementOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasPostIncrementOperator< C1, C1, int  >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasPostIncrementOperator< C2, C2, int >::value ) );
}

TEST( XS_TypeTraits, HasPostDecrementOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasPostDecrementOperator< C1, C1, int >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasPostDecrementOperator< C2, C2, int >::value ) );
}

TEST( XS_TypeTraits, HasUnaryPlusOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasUnaryPlusOperator< C1, C1 >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasUnaryPlusOperator< C2, C2 >::value ) );
}

TEST( XS_TypeTraits, HasUnaryMinusOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasUnaryMinusOperator< C1, C1 >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasUnaryMinusOperator< C2, C2 >::value ) );
}

TEST( XS_TypeTraits, HasAdditionOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasAdditionOperator< C1, C1, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasAdditionOperator< C2, C2, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasSubtractionOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasSubtractionOperator< C1, C1, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasSubtractionOperator< C2, C2, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasMultiplicationOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasMultiplicationOperator< C1, C1, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasMultiplicationOperator< C2, C2, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasDivisionOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasDivisionOperator< C1, C1, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasDivisionOperator< C2, C2, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasModuloOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasModuloOperator< C1, C1, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasModuloOperator< C2, C2, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasBitwiseNOTOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasBitwiseNOTOperator< C1, C1 >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasBitwiseNOTOperator< C2, C2 >::value ) );
}

TEST( XS_TypeTraits, HasBitwiseANDOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasBitwiseANDOperator< C1, C1, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasBitwiseANDOperator< C2, C2, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasBitwiseOROperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasBitwiseOROperator< C1, C1, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasBitwiseOROperator< C2, C2, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasBitwiseXOROperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasBitwiseXOROperator< C1, C1, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasBitwiseXOROperator< C2, C2, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasBitwiseLeftShiftOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasBitwiseLeftShiftOperator< C1, C1, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasBitwiseLeftShiftOperator< C2, C2, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasBitwiseRightShiftOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasBitwiseRightShiftOperator< C1, C1, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasBitwiseRightShiftOperator< C2, C2, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasNegationOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasNegationOperator< C1, bool >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasNegationOperator< C2, bool >::value ) );
}

TEST( XS_TypeTraits, HasANDOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasANDOperator< C1, bool, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasANDOperator< C2, bool, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasInclusiveOROperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasInclusiveOROperator< C1, bool, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasInclusiveOROperator< C2, bool, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasEqualToOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasEqualToOperator< C1, bool, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasEqualToOperator< C2, bool, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasNotEqualToOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasNotEqualToOperator< C1, bool, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasNotEqualToOperator< C2, bool, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasLessThanOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasLessThanOperator< C1, bool, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasLessThanOperator< C2, bool, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasGreaterThanOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasGreaterThanOperator< C1, bool, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasGreaterThanOperator< C2, bool, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasLessThanOrEqualToOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasLessThanOrEqualToOperator< C1, bool, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasLessThanOrEqualToOperator< C2, bool, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasGreaterThanOrEqualToOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasGreaterThanOrEqualToOperator< C1, bool, const C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasGreaterThanOrEqualToOperator< C2, bool, const C2 & >::value ) );
}

TEST( XS_TypeTraits, HasSubscriptOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasSubscriptOperator< C1, C1 &, int >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasSubscriptOperator< C2, C2 &, int >::value ) );
}

TEST( XS_TypeTraits, HasIndirectionOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasIndirectionOperator< C1, C1 & >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasIndirectionOperator< C2, C2 & >::value ) );
}

TEST( XS_TypeTraits, HasAddressOfOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasAddressOfOperator< C1, C1 * >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasAddressOfOperator< C2, C2 * >::value ) );
}

TEST( XS_TypeTraits, HasMemberOfPointerOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasMemberOfPointerOperator< C1, C1 * >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasMemberOfPointerOperator< C2, C2 * >::value ) );
}

TEST( XS_TypeTraits, HasPointerToMemberOfPointerOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasPointerToMemberOfPointerOperator< C1, C1 &, int >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasPointerToMemberOfPointerOperator< C2, C1 &, int >::value ) );
}

TEST( XS_TypeTraits, HasFunctionCallOperator )
{
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasFunctionCallOperator< C1, void         >::value ) );
    ASSERT_TRUE( 1 == ( XS::TypeTraits::HasFunctionCallOperator< C1, void, int    >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasFunctionCallOperator< C1, void, double >::value ) );
    ASSERT_TRUE( 0 == ( XS::TypeTraits::HasFunctionCallOperator< C2, void         >::value ) );
}
