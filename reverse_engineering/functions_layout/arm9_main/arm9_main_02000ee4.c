
undefined4 FUN_02000ee4(undefined4 param_1,ushort param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined1 *)(param_3 + 1) = 2;
  *(ushort *)(param_3 + 2) = param_2 >> 8 | param_2 << 8;
  uVar1 = FUN_020019ec();
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) == -1) {
    iVar2 = func_0x02193970(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    *(undefined4 *)(param_3 + 4) = *(undefined4 *)**(undefined4 **)(iVar2 + 0xc);
  }
  return 1;
}

