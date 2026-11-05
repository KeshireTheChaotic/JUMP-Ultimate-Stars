
undefined4 FUN_021576dc(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    iVar3 = iVar2 * 0x38;
    uVar1 = FUN_0215e660(*(undefined4 *)(param_1 + 0x3d8),&DAT_0216fbdc,8,iVar3 + 0x19,0x80,1,0);
    *(undefined4 *)(param_2 + iVar2 * 0xc + 4) = uVar1;
    uVar1 = FUN_0215e660(*(undefined4 *)(param_1 + 0x3d8),&DAT_0216fbdc,8,iVar3 + 0x29,0x80,6,0);
    *(undefined4 *)(param_2 + iVar2 * 0xc + 8) = uVar1;
    uVar1 = FUN_0215e660(*(undefined4 *)(param_1 + 0x3d8),&DAT_0216fbdc,8,iVar3 + 0x39,0x80,6,0);
    iVar3 = iVar2 * 0xc;
    iVar2 = iVar2 + 1;
    *(undefined4 *)(param_2 + iVar3 + 0xc) = uVar1;
  } while (iVar2 < 3);
  return 1;
}

