<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
    <xsl:output method="html" encoding="UTF-8" indent="yes"/>
    
    <xsl:template match="/">
        <html>
            <head>
                <title>Аттестация студентов</title>
                <style>
                    .low { background-color: red; }
                    .high { background-color: green; }
                </style>
            </head>
            <body>
                <h1>Результаты аттестации студентов</h1>
                <table border="1">
                    <tr>
                        <th>Имя студента</th>
                        <th>Предмет</th>
                        <th>Оценка</th>
                    </tr>
                    <xsl:for-each select="students/student">
                        <tr>
                            <td><xsl:value-of select="name"/></td>
                            <td><xsl:value-of select="subject"/></td>
                            <td>
                                <xsl:attribute name="class">
                                    <xsl:choose>
                                        <xsl:when test="grade &lt; 4">low</xsl:when>
                                        <xsl:when test="grade &gt; 8">high</xsl:when>
                                    </xsl:choose>
                                </xsl:attribute>
                                <xsl:value-of select="grade"/>
                            </td>
                        </tr>
                    </xsl:for-each>
                </table>
            </body>
        </html>
    </xsl:template>
</xsl:stylesheet>
