
undefined4 FUN_02157554(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  *(undefined1 *)(param_1 + 0x45b) = 0xff;
  do {
    uVar2 = FUN_0215e660(*(undefined4 *)(param_1 + 0x3d8),&DAT_0216fbdc,8,iVar3 * 0x10 + 0x21,0x80,6
                         ,0);
    iVar1 = iVar3 * 4;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(param_2 + iVar1 + 4) = uVar2;
  } while (iVar3 < 9);
  return 1;
}

