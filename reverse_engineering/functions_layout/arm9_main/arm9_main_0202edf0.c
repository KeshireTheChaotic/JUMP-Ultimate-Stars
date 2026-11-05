
void FUN_0202edf0(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x58))(param_1,param_5,param_3,param_4,param_4);
  if (piVar1 == (int *)0x0) {
    return;
  }
  uVar2 = (**(code **)(*piVar1 + 0x80))();
  FUN_02004b94(param_2,uVar2,param_3);
  FUN_02004bf4(param_2,&DAT_0209d9c0,param_3);
  iVar3 = FUN_02004b04(param_2);
  uVar2 = (**(code **)(*param_1 + 0x5c))(param_1,param_5);
  (**(code **)(*piVar1 + 0x8c))(piVar1,param_2 + iVar3,param_3 - iVar3,param_4,uVar2);
  FUN_02004bf4(param_2,&DAT_0209d9c4,param_3);
  return;
}

