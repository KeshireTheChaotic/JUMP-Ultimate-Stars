
void FUN_0214d154(undefined4 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    iVar1 = 0;
    uVar3 = uVar2;
    do {
      if ((uVar3 & 1) == 0) {
        uVar3 = uVar3 >> 1;
      }
      else {
        uVar3 = uVar3 >> 1 ^ 0xedb88320;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
    *param_2 = uVar3;
    param_2 = param_2 + 1;
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x100);
  return;
}

