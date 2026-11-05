
int FUN_02170500(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_02083624(FUN_0216e3d0,param_3,
                       *(uint *)(*(int *)(param_2 + 0x10) + 0x34) & 0xffff | 0x1000,
                       *(uint *)(*(int *)(param_2 + 0x10) + 0x3c) & 0xffff | 0x800,0,param_4);
  *(int *)(param_1 + 0x2c) = iVar2;
  if (iVar2 == 0) {
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 8;
    param_1 = 0;
  }
  else {
    FUN_0216e820(iVar2,param_2,*(undefined4 *)(param_1 + 0x28));
    FUN_0216eb8c(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_3 + 0x14));
    FUN_0216e898(*(undefined1 *)(param_3 + 0x24),*(undefined1 *)(param_3 + 0x1c),param_1 + 0x30,
                 param_1 + 0x32);
    cVar1 = *(char *)(param_3 + 0x24);
    if (*(char *)(param_3 + 0x1c) != '\0') {
      cVar1 = -0x80 - cVar1;
    }
    *(char *)(param_1 + 0x34) = cVar1;
    FUN_0216ec88(*(undefined4 *)(param_1 + 0x2c),param_1,1,0,0);
    FUN_02170600(*(undefined4 *)(param_1 + 0x2c),1);
    iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 0x10);
    *(uint *)(iVar2 + 0x78) = *(uint *)(iVar2 + 0x78) | 0x100000;
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 2;
  }
  return param_1;
}

