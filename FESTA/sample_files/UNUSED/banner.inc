<script language=JavaScript>
/*  Provided a popup window for registration */
function regpopup(sw) {
  edit = window.open('http://csg.sph.umich.edu/register.php?sw='+sw, 'register',
    'width=600,height=500,resizable,scrollbars,menubar');
}
</script>

<!-- Generate banner at top, two columns -->
<table border=0 cellspacing=0 cellpadding=0 width=100% class=hdr-outer>
<tr>
  <td class=hdr-left ><center>
    <a href="http://www.umich.edu"><img src="/abecasis/images/logoleft.gif" alt="University of Michigan" border=0></a>
    <a href="http://csg.sph.umich.edu"><img src="/abecasis/images/logo.gif" alt="Center for Statistical Genetics" border=0></a>
  </center></td>
  <td class=hdr-right valign=bottom>
    <form action=http://csg.sph.umich.edu/pubcgi/swish.cgi method=get>
    <input type=hidden name=si value=abecasis>
    <input type=hidden name=selected value=swishrank>
    <div align=right class=hdr-right>Search<br>
    <input name=query type=text size=12 value=""></div>
    </form>
  <p align=right><b><a href=/abecasis/sitemap.html class=hdr-right>Site map</a>
  </td>
  <td>&nbsp;</td>
</tr></table>
<!-- End top banner/logo for page -->
