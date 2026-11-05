
/* JUS-GAME ALWidget::Clone [source-string] __FILE__="ALWidget.cpp" __FUNCTION__="Clone"
   lines=[1682] passed to 1 source-location call(s) */

int ALWidget::Clone(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = jus_AllocDebug(0xbc,s_ALWidget_cpp_021d17d4,s_Clone_021d1698,0x692);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = ALWidget(iVar1,*(undefined4 *)(param_1 + 0xb8),param_2);
  }
  FUN_0201512c(*(undefined4 *)(iVar2 + 100),*(undefined4 *)(*(int *)(param_1 + 100) + 0x34));
  uVar3 = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(iVar2 + 0x98) = uVar3;
  *(undefined4 *)(iVar2 + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  return iVar2;
}

