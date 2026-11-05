
/* WARNING: Removing unreachable block (ram,0x02151c04) */

void FUN_02151bcc(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if ((param_1 < 0x101) && (*(char *)(DAT_020a0dd8 + 0x414) != '\0')) {
    FUN_0201a6d8(DAT_020a0f60,param_1);
    return;
  }
  FUN_0201a418(DAT_020a0dd8,0,param_1,param_4,param_4);
  return;
}

