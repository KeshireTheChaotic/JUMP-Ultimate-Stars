
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f41b8(int param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int local_48 [2];
  short local_40;
  ushort local_3e;
  undefined2 local_3c;
  undefined2 local_32;
  undefined4 local_2c;
  
  iVar5 = _DAT_0380fff4;
  uVar1 = *(ushort *)(param_1 + 6);
  if (((10 < uVar1) && (*(short *)(_DAT_0380fff4 + 0x350) == 1)) &&
     (iVar3 = FUN_027f0730(param_1 + 0x1e,0x30), iVar3 == 0)) {
    uVar2 = *(undefined2 *)(param_1 + 2);
    uVar4 = FUN_027ec2bc(uVar2);
    if (uVar4 < 0x30) {
      iVar5 = FUN_027f084c(param_1 + 0x1e,6);
      if (iVar5 != 0) {
        FUN_027f15ac();
      }
    }
    else {
      iVar3 = FUN_027ec2bc(uVar2);
      if (iVar3 == 0x40) {
        FUN_027ec560(uVar2,0x30);
        FUN_027ecc44(param_1 + 0x1e,1);
      }
      else {
        iVar3 = FUN_027ec1e4(uVar2);
        if (iVar3 != 0) {
          return;
        }
      }
      MIi_CpuClear32(0,local_48,0x2c);
      local_48[0] = param_1 + 0x36;
      local_40 = uVar1 - 10;
      local_3c = 0x800;
      FUN_027f3248(local_48);
      uVar1 = *(ushort *)(param_1 + 0x2c);
      if ((((uVar1 & 0xffc2) == 0) &&
          ((*(short *)(iVar5 + 0x334) != 0 || ((uVar1 & 0x1f) >> 4 != 1)))) &&
         ((*(short *)(iVar5 + 0x334) == 0 || ((*(ushort *)(param_1 + 0x2c) & 0x1f) >> 4 != 0)))) {
        FUN_027ec468(uVar2);
        if ((local_3e & 1) == 0) {
          uVar6 = 1;
        }
        else if ((local_3e & 4) == 0) {
          uVar6 = 0x12;
        }
        else {
          FUN_027ec450(uVar2,local_32);
          uVar6 = 0;
        }
      }
      else {
        uVar6 = 10;
      }
      iVar5 = FUN_027f0ae4(uVar2,uVar6,local_2c);
      if (iVar5 != 0) {
        FUN_027f15ac();
      }
    }
  }
  return;
}

