
bool FUN_021629a4(int param_1,int param_2,int param_3,undefined1 *param_4,undefined1 *param_5)

{
  short *psVar1;
  int iVar2;
  
  psVar1 = (short *)(*(int *)(param_1 + 0x14) + ((param_3 >> 0xc) * 0x40 + (param_2 >> 0xc)) * 8);
  if (((char)psVar1[1] == '\x06') && ((*(uint *)(param_1 + 0x3c) & 8) == 0)) {
    iVar2 = *(int *)(param_1 + 0x20) +
            *(short *)(*psVar1 * 0x18 + *(int *)(param_1 + 0x18) + 0x16) * 8;
    *param_4 = *(undefined1 *)(iVar2 + 3);
    *param_5 = *(undefined1 *)(iVar2 + 2);
    return *(char *)(iVar2 + 6) != '\0';
  }
  return false;
}

