
int * FUN_0203d6e8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  iVar1 = jus_AllocDebug(0x40);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)jus_Class_020942e4::jus_Class_020942e4();
  }
  piVar2[4] = param_2;
  FUN_02011990(&uStack_18,param_2);
  (**(code **)(*piVar2 + 0x10))(piVar2,&uStack_18);
  piVar2[5] = param_3;
  *(undefined1 *)(piVar2 + 0xf) = 0;
  FUN_0201cca0(param_1 + 0x4ac,piVar2);
  *(int *)(param_1 + 0x8bc) = *(int *)(param_1 + 0x8bc) + 1;
  return piVar2;
}

