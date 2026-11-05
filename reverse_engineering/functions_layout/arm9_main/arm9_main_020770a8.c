
undefined4 FUN_020770a8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(param_3 * 0x14 + param_1 + param_2 * 4 + 8);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = *(undefined4 *)(iVar3 + 0x34);
    if (iVar3 != 0) {
      FUN_02037c24(param_1 + 0x558,iVar3);
      FUN_02037b98(param_1 + 0x560,iVar3);
      *(uint *)(param_1 + 0x568) =
           *(uint *)(param_1 + 0x568) &
           ~(*(int *)(*(int *)(iVar3 + 0x38) + 0x14) <<
            (*(byte *)(iVar3 + 0xe) & 0xf) + ((int)(*(byte *)(iVar3 + 0xe) & 0xf0) >> 4) * 5);
      piVar2 = (int *)(param_1 + 8);
      iVar1 = 0x14;
      do {
        iVar1 = iVar1 + -1;
        if (iVar3 == *piVar2) {
          *piVar2 = 0;
        }
        piVar2 = piVar2 + 1;
      } while (0 < iVar1);
    }
    FUN_02077aa8(param_1);
    FUN_02077610(param_1);
    FUN_020772e4(param_1);
    FUN_02077768(param_1);
  }
  return uVar4;
}

