<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
    <xsl:output method="html" encoding="UTF-8" indent="yes"/>
    

    <xsl:template match="/">
        <html>
            <head>
                <title>Магазин книг</title>
            </head>
            <body>
                <h1>Продукты</h1>
                <table border="1">
                    <tr>
                        <th>Название</th>
                        <th>Автор</th>
                        <th>Цена</th>
                        <th>Жанр</th>
                    </tr>
                    <xsl:for-each select="books/product">
                        <xsl:sort select="price" data-type="number" order="ascending"/>
                        <tr>
                            <td><xsl:value-of select="name"/></td>
                            <td><xsl:value-of select="author"/></td>
                            <td><xsl:value-of select="price"/></td>
                            <td><xsl:value-of select="book"/></td>
                        </tr>
                    </xsl:for-each>
                </table>
            </body>
        </html>
    </xsl:template>
</xsl:stylesheet>
