
int FUN_02166718(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 *param_5,
                int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_18;
  
  iVar1 = FUN_0216609c(*(undefined4 *)(DAT_0216e844 + 0x788));
  *(char *)(iVar1 + 0x36) = (char)param_2;
  *(char *)(iVar1 + 0x37) = (char)param_3;
  uVar2 = FUN_02167388(param_1,param_3 * param_2,param_4,&local_18);
  *(undefined4 *)(iVar1 + 0x30) = uVar2;
  *(short *)(iVar1 + 0x34) = (short)local_18;
  uVar2 = FUN_0205f438(param_2,param_3);
  *param_5 = uVar2;
  if (param_1 == 1) {
    iVar3 = 0x6600000;
  }
  else {
    iVar3 = 0x6400000;
  }
  FUN_0205f5b0(iVar1,iVar3 + local_18 * 0x80,param_2,param_3,4);
  (**(code **)(iVar1 + 0x18))(iVar1,0);
  iVar3 = DAT_0216e844 + param_6 * 0xc;
  *(int *)(iVar1 + 0x20) = iVar1;
  *(int *)(iVar1 + 0x24) = iVar3;
  *(undefined4 *)(iVar1 + 0x28) = 1;
  *(undefined4 *)(iVar1 + 0x2c) = 1;
  return iVar1;
}

