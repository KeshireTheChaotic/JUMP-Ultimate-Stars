
/* JUS-GAME ALNodeImp::Create [source-string-template] __FILE__="ALNodeImp.h" __FUNCTION__="Create";
   one of 4 instantiations in arm9_ov12 */

int * ALNodeImp::Create(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  jus_Class_021d3950::jus_Class_021d3950();
  *param_1 = (int)&CommonWindow::vftable;
  param_1[0x4f] = DAT_021d28ec;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  iVar1 = thunk_FUN_0201a228(0x20,s_ALNodeImp_h_021d3bcc,s_Create_021d3b58,0x687);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = CommonWindow_Part_020945fc::CommonWindow_Part_020945fc(iVar1,0x10);
  }
  param_1[0x4e] = iVar2;
  piVar3 = (int *)param_1[0x27];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x184))(piVar3,param_1);
  }
  if (param_1[0x27] == 0) {
    (**(code **)(*param_1 + 0x148))(param_1,1);
  }
  return param_1;
}

