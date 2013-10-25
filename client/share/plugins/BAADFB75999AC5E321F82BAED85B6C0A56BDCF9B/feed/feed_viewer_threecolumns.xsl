<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
                xmlns:dc="http://purl.org/dc/elements/1.1/" 
                xmlns:system="http://www.osiris-sps.org/xsl/system" 
                version="1.0">

  <xsl:output method="text"/>

  <xsl:template match="/">
    <xsl:apply-templates select="//channel"/>
  </xsl:template>

  <xsl:template name="viewDate">
    <xsl:if test="dc:date">
      <xsl:text>[span style="color:gray;"] [small]([date mode="friendly"]</xsl:text>
      <xsl:value-of select="dc:date"/>
      <xsl:text>)[/date])[/small][/span]</xsl:text>
    </xsl:if>
    <xsl:if test="pubDate">
      <xsl:text>[span style="color:gray;"] [small]([date mode="friendly"]</xsl:text>
      <xsl:value-of select="pubDate"/>
      <xsl:text>)[/date])[/small][/span]</xsl:text>
    </xsl:if>
  </xsl:template>

  <xsl:template name="link">    
    <xsl:text>[h4][url="</xsl:text>
    <xsl:apply-templates select="*[local-name()='link']" />
    <xsl:text>"]</xsl:text>
    <xsl:value-of select="system:parse-reverse(*[local-name()='title'])"/>    
    <xsl:text>[/url][/h4][div style="text-align:right;border-top:1px solid gray;margin:2px;"]</xsl:text>
    <xsl:call-template name="viewDate"/>
    <xsl:text>[/div]</xsl:text>
    <xsl:value-of select="system:parse-reverse(description/text())"/>
  </xsl:template>

  <xsl:template match="*[local-name()='channel']">
    <xsl:text>[center][h3]</xsl:text>
    <xsl:if test="image">
      <xsl:if test="/rss/@showImage = 'true'">
        <xsl:text>[div style="float:right"][img]</xsl:text>
        <xsl:value-of select="image/url"/>
        <xsl:text>[/img][/div]</xsl:text>
      </xsl:if>
    </xsl:if>
    <xsl:call-template name="link"/>
    <xsl:text>[/h3][/center]</xsl:text>

    <xsl:text>[table style="width:100%"][tr]</xsl:text>
    <xsl:text>[td]</xsl:text>
    <xsl:apply-templates select="//*[local-name()='item' and (((position()-1) mod 3) = 0)]" />
    <xsl:text>[/td]</xsl:text>
    <xsl:text>[td]</xsl:text>
    <xsl:apply-templates select="//*[local-name()='item' and (((position()-1) mod 3) = 1)]" />
    <xsl:text>[/td]</xsl:text>
    <xsl:text>[td]</xsl:text>    
    <xsl:apply-templates select="//*[local-name()='item' and (((position()-1) mod 3) = 2)]" />    
    <xsl:text>[/td]</xsl:text>
    <xsl:text>[/tr][/table]</xsl:text>
  </xsl:template>

  <xsl:template match="*[local-name()='item']">
    <xsl:text>[div class="os_content_box"]</xsl:text>
    <xsl:call-template name="link"/>
    <xsl:text>[/div]</xsl:text>
  </xsl:template>
  
</xsl:stylesheet>
