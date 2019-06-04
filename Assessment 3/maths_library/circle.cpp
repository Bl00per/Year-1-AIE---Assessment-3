#include "circle.h"

const float circle::DEFAULT_RADIUS = 5.0f;

circle::circle(const Vector2& a_position /* = Vector2()*/,
	const float a_radius/* = DEFAULT_RADIUS*/) :
	m_position(a_position),
	m_radius(a_radius),
	collider(shape::circle)
{}

float circle::get_radius() const
{
	return m_radius;
}

void circle::set_radius(const float a_radius)
{
	m_radius = abs(a_radius);
}

const Vector2 circle::get_position() const
{
	return m_position;
}

void circle::set_position(const Vector2& a_position)
{
	m_position = a_position;
}