
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ec560(uint param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  
  uVar1 = FUN_037fbc10(0x1000000);
  if (param_2 < 0x40) {
    FUN_027ec480(param_1);
    *(ushort *)(_DAT_0380fff4 + 0x532) =
         *(ushort *)(_DAT_0380fff4 + 0x532) | (ushort)(1 << (param_1 & 0xff));
    if ((*(short *)(_DAT_0380fff4 + 0x350) == 1) && (iVar2 = FUN_027ec1e4(param_1), iVar2 != 0)) {
      FUN_027ec2d8(param_1);
    }
  }
  else {
    *(ushort *)(_DAT_0380fff4 + 0x532) =
         *(ushort *)(_DAT_0380fff4 + 0x532) & ~(ushort)(1 << (param_1 & 0xff));
    iVar2 = FUN_027ec27c(param_1);
    if (iVar2 != 0) {
      FUN_027ec4a4(param_1);
    }
  }
  puVar3 = (undefined2 *)FUN_027ec1ac(param_1);
  *puVar3 = (short)param_2;
  FUN_037fbc4c(uVar1);
  return;
}

