
void FUN_0203505c(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0xc) != '\0') {
    uVar2 = *(undefined4 *)(param_1 + 8);
    iVar1 = FUN_0201a9ec(uVar2);
    if (iVar1 == 0) {
      FUN_0201a958(uVar2,1);
    }
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(uint *)(param_1 + 4) = param_2 & 0xffff;
  return;
}

