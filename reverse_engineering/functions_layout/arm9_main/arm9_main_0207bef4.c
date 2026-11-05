
int FUN_0207bef4(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0214be0c;
  iVar2 = *(int *)(DAT_0214be0c + 0x18);
  if (iVar2 == 0) {
    return 0;
  }
  *(char *)(iVar2 + 0x1c) = (char)param_3;
  *(undefined4 *)(iVar2 + 8) = param_1;
  *(undefined4 *)(iVar2 + 0xc) = param_2;
  FUN_02037c24(DAT_0214be0c + 0x18,iVar2,iVar1,&DAT_0214be0c,param_4);
  FUN_02037b98(DAT_0214be0c + param_3 * 8,iVar2);
  return iVar2;
}

