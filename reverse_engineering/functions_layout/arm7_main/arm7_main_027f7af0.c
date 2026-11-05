
/* WARNING: Removing unreachable block (ram,0x027f7b34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f7af0(ushort *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    _DAT_04000138 = _DAT_04000138 & 0xff88 | 100;
    iVar1 = 0;
    do {
      iVar2 = 9;
      do {
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      _DAT_04000138 = _DAT_04000138 & 0xfffc | 2;
      iVar2 = 9;
      do {
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      iVar1 = iVar1 + 1;
    } while (iVar1 != 8);
    if (((uint)param_1 & 1) == 0) {
      *param_1 = *param_1 & 0xff00;
    }
    else {
      *(ushort *)((int)param_1 + -1) = *(ushort *)((int)param_1 + -1) & 0xff;
    }
    param_1 = (ushort *)((int)param_1 + 1);
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

