const GRAPHIC_DETAIL = ["Low", "Mid", "High"];
const GRAPHIC_DETAIL_DATA = [1, 2, 3];
const GRAPHIC_DETAIL_DEFAULTIDX = 1;

function init()
{
	var graphicDetail = getGUIObjectByName("Graphics");
	graphicDetail.list = GRAPHIC_DETAIL;
	graphicDetail.list_data = GRAPHIC_DETAIL_DATA;
	graphicDetail.selected = GRAPHIC_DETAIL_DEFAULTIDX;
}