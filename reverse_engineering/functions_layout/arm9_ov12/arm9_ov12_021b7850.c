
/* JUS-GAME ALNodeImp::Create [source-string-template] __FILE__="ALNodeImp.h" __FUNCTION__="Create";
   one of 4 instantiations in arm9_ov12 */

undefined4 *
ALNodeImp::Create(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  ALWidgetBase_021d3950::ALWidgetBase_021d3950();
  *param_1 = &CommonWindow::vftable;
  param_1[0x4f] = *(undefined4 *)(param_2 + 0x13c);
  param_1[0x50] = *(undefined4 *)(param_2 + 0x140);
  param_1[0x51] = *(undefined4 *)(param_2 + 0x144);
  param_1[0x52] = *(undefined4 *)(param_2 + 0x148);
  iVar1 = jus_AllocDebug(0x20,s_ALNodeImp_h_021d3bcc,s_Create_021d3b58,0x687,param_4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_020945fc::jus_Class_020945fc(iVar1,0x10);
  }
  param_1[0x4e] = uVar2;
  piVar3 = (int *)param_1[0x27];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x184))(piVar3,param_1);
  }
  return param_1;
}

