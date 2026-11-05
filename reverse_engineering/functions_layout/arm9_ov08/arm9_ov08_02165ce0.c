
void FUN_02165ce0(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 8);
  if (param_2 < 0) {
    iVar1 = 0;
    if (*(char *)(param_1 + 0xc) != '\0') {
      do {
        if ((param_3 == 0x100) || (param_3 == 0x300)) {
          *puVar2 = param_4 * 0x2000000 | *puVar2 & 0xc1fffcff | param_3;
        }
        else {
          *puVar2 = *puVar2 & 0xc1fffcff | param_3;
        }
        puVar2 = puVar2 + 2;
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)(uint)*(byte *)(param_1 + 0xc));
    }
    return;
  }
  if ((param_3 == 0x100) || (param_3 == 0x300)) {
    puVar2[param_2 * 2] = param_4 << 0x19 | puVar2[param_2 * 2] & 0xc1fffcff | param_3;
    return;
  }
  puVar2[param_2 * 2] = puVar2[param_2 * 2] & 0xc1fffcff | param_3;
  return;
}

