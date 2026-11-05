
void FUN_021556d8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  if (*(char *)(param_1 + 0x46a) != '\0') {
    *(undefined1 *)(param_1 + 0x46a) = 0;
    if ((*(char *)(param_1 + 0x458) == '\x05') && (param_2 != 0)) {
      FUN_02155458();
    }
    else {
      FUN_0215541c(param_1);
    }
    iVar2 = (short)*(char *)(param_1 + 0x459) * 0x9c;
    FUN_02155588(param_1 + iVar2);
    (*(code *)(&DAT_0216d614)[*(char *)(param_1 + 0x459) * 4])(param_1,param_1 + iVar2);
    local_18 = (short)(&DAT_0216d5f6)[*(char *)(param_1 + 0x458) * 2] * -0x1000;
    local_14 = (short)(&DAT_0216d5f4)[*(char *)(param_1 + 0x458) * 2] * -0x1000;
    FUN_0214ce68(*(undefined4 *)(param_1 + 0x414),&local_14,&local_18);
    *(undefined1 *)(param_1 + 0x468) = 1;
  }
  uVar1 = 0;
  if (*(char *)(param_1 + 0x468) != '\0') {
    *(undefined1 *)(param_1 + 0x468) = 0;
    *(undefined4 *)(param_1 + 0x3a8) =
         *(undefined4 *)(&DAT_0216d610 + *(char *)(param_1 + 0x458) * 0x10);
    uVar1 = (uint)*(char *)(param_1 + 0x458);
    *(uint *)(param_1 + 0x3ac) = uVar1 * 0x9c + param_1;
  }
  pcVar3 = *(code **)(param_1 + 0x3a8);
  if (pcVar3 != (code *)0x0) {
    uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0x3ac) + 0x99);
  }
  if ((pcVar3 != (code *)0x0 && uVar1 != 0) && (iVar2 = (*pcVar3)(param_1), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x3a8) = 0;
  }
  return;
}

