
void FUN_02057364(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1 & 0xff;
  if (((int)param_1 >> 8 & 0xffU) != (uint)(byte)(&DAT_020aca88)[uVar1 * 0xc]) {
    return;
  }
  if ((code *)(&DAT_020aca80)[uVar1 * 3] == (code *)0x0) {
    return;
  }
  (*(code *)(&DAT_020aca80)[uVar1 * 3])((&DAT_020aca84)[uVar1 * 3]);
  return;
}

