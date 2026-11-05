
/* WARNING: Removing unreachable block (ram,0x027f7908) */

void FUN_027f783c(ushort param_1)

{
  ushort local_18 [2];
  undefined1 auStack_14 [8];
  
  if (((param_1 & 1) == 1) && (FUN_027f7554(local_18), (local_18[0] & 3) >> 1 != 1)) {
    local_18[0] = local_18[0] & 0xfffd | (param_1 & 1) << 1;
    FUN_027f7528(local_18);
    FUN_027f717c(0x86,0x10,auStack_14,3);
    if ((param_1 & 1) == 0) {
      FUN_027f72f8(auStack_14);
    }
    else {
      FUN_027f71e0(auStack_14);
    }
    FUN_027f717c(6,0x10,auStack_14,3);
    FUN_027f717c(0x86,0x50,auStack_14,3);
    FUN_027f71e0(auStack_14);
    FUN_027f717c(6,0x50,auStack_14,3);
  }
  return;
}

