
/* JUS-GAME ALTextDS::SetFont [source-string] __FILE__="ALTextDS.cpp" __FUNCTION__="SetFont"
   lines=[1308] passed to 1 source-location call(s) */

void ALTextDS::SetFont(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = (**(code **)(*param_2 + 0x4c))();
  iVar4 = 0x444d4332;
  bVar5 = iVar1 != 0x444d4332;
  if (!bVar5) {
    iVar4 = param_2[0x1c];
    iVar1 = *(int *)(param_1 + 0x34);
  }
  if (bVar5 || iVar4 != iVar1) {
    iVar1 = FUN_021cb6e8(param_2,0x444d4332);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_2 + 0x4c))();
      if (((iVar1 == 0x504d4f43) || (iVar1 = (**(code **)(*param_2 + 0x4c))(), iVar1 == 0x44505845))
         || ((iVar1 = (**(code **)(*param_2 + 0x4c))(), iVar1 == 0x444d4332 &&
             (param_2[0x1c] != *(int *)(param_1 + 0x34))))) {
        iVar1 = thunk_FUN_0201a228(0x7c,s_ALTextDS_cpp_021d4e30,s_SetFont_021d48f4,0x51c);
        piVar2 = (int *)0x0;
        if (iVar1 != 0) {
          piVar2 = (int *)ALFont_021d4974::ALFont_021d4974
                                    (iVar1,param_2,*(undefined4 *)(param_1 + 0x34));
        }
        FUN_021c662c(param_1,piVar2);
        (**(code **)(*piVar2 + 0xc))();
      }
    }
    else {
      FUN_021c662c(param_1);
    }
  }
  else {
    FUN_021c662c(param_1,param_2);
  }
  uVar3 = (**(code **)(*param_2 + 0x2c))();
  *(bool *)(param_1 + 0x175) = 8 < uVar3;
  return;
}

