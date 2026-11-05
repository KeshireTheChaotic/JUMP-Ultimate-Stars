
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f4478(int param_1)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  ushort *puVar8;
  int local_48 [2];
  short local_40;
  ushort local_3e;
  undefined2 local_32;
  undefined4 local_2c;
  
  iVar6 = _DAT_0380fff4;
  uVar1 = *(ushort *)(param_1 + 6);
  puVar8 = (ushort *)(param_1 + 0x2c);
  if (((4 < uVar1) && (*(short *)(_DAT_0380fff4 + 0x350) == 1)) &&
     (iVar4 = FUN_027f0730(param_1 + 0x1e,0x10), iVar4 == 0)) {
    sVar2 = *(short *)(param_1 + 2);
    if ((sVar2 == 0) || (uVar5 = FUN_027ec2bc(sVar2), uVar5 < 0x30)) {
      iVar6 = FUN_027f084c(param_1 + 0x1e,6);
      if (iVar6 != 0) {
        FUN_027f15ac();
      }
    }
    else {
      iVar4 = FUN_027ec2bc(sVar2);
      if (iVar4 == 0x40) {
        FUN_027ec560(sVar2,0x30);
        FUN_027ecc44(param_1 + 0x1e,1);
      }
      else {
        iVar4 = FUN_027ec1e4(sVar2);
        if (iVar4 != 0) {
          return;
        }
      }
      MIi_CpuClear32(0,local_48,0x2c);
      local_48[0] = param_1 + 0x30;
      local_40 = uVar1 - 4;
      FUN_027f3248(local_48);
      uVar1 = *puVar8;
      if ((((((uVar1 & 0xffc2) == 0) && ((uVar1 & 1) != 0)) &&
           ((sVar3 = *(short *)(iVar6 + 0x334), sVar3 != 0 || ((uVar1 & 0x1f) >> 4 != 1)))) &&
          ((sVar3 == 0 || ((*puVar8 & 0x1f) >> 4 != 0)))) &&
         (((*(ushort *)(iVar6 + 0x33a) & 7) >> 2 != 1 || ((*puVar8 & 0x3f) >> 5 != 0)))) {
        FUN_027ec468(sVar2);
        if ((local_3e & 1) == 0) {
          uVar7 = 1;
        }
        else if ((local_3e & 4) == 0) {
          uVar7 = 0x12;
        }
        else {
          FUN_027ec450(sVar2,local_32);
          uVar7 = 0;
        }
      }
      else {
        uVar7 = 10;
      }
      iVar6 = FUN_027f0c50(sVar2,uVar7,local_2c);
      if (iVar6 != 0) {
        FUN_027f15ac();
      }
    }
  }
  return;
}

