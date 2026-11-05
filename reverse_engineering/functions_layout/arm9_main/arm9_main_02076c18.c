
void FUN_02076c18(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  FUN_020517fc(param_1 + 8,0,0x5e0,param_4,param_4);
  iVar1 = param_1 + 0x58;
  iVar2 = 0x10;
  do {
    FUN_02037b98(param_1 + 0x560,iVar1);
    iVar2 = iVar2 + -1;
    *(undefined2 *)(iVar1 + 0xc) = 0xffff;
    iVar1 = iVar1 + 0x50;
  } while (0 < iVar2);
  iVar1 = 0;
  do {
    iVar2 = param_1 + iVar1;
    iVar1 = iVar1 + 1;
    *(undefined1 *)(iVar2 + 0x5d7) = 0xff;
  } while (iVar1 < 3);
  return;
}

