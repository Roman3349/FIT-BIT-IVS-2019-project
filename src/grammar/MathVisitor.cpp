/*
 * Copyright (C) 2019 Radim Lipka <xlipka02@stud.fit.vutbr.cz>
 * Copyright (C) 2019 Roman Ondráček <xondra58@stud.fit.vutbr.cz>
 * Copyright (C) 2019 Pavel Raur <xraurp00@stud.fit.vutbr.cz>
 * Copyright (C) 2019 David Reinhart <xreinh00@stud.fit.vutbr.cz>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include "MathVisitor.h"

antlrcpp::Any MathVisitor::visitNumber(calculatorParser::NumberContext *context) {
	double result = std::stod(context->getText());
	return result;
}

antlrcpp::Any MathVisitor::visitInput(calculatorParser::InputContext *context) {
	double result = visit(context->expression());
	return result;
}

antlrcpp::Any MathVisitor::visitPlus(calculatorParser::PlusContext *context) {
	double a = visit(context->multiplyingExpression(0));
	double b = visit(context->multiplyingExpression(1));
	return genericMath.add(a, b);
}
