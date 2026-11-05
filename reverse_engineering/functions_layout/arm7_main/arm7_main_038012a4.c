
void FUN_038012a4(byte *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  undefined1 local_28 [16];
  
  iVar4 = 0;
  if (((*param_1 & 0xf) >> 3 != 0) && (iVar4 = *(int *)(param_1 + 0x3c), iVar4 != 0)) {
    *(char *)(iVar4 + 8) = (char)param_3;
    *(char *)(iVar4 + 9) = (char)param_4;
  }
  if (iVar4 != 0) goto LAB_038013d4;
  iVar4 = FUN_038025d4(*(undefined4 *)(param_2 + 0x20),*(undefined2 *)(param_1 + 2),param_3,local_28
                      );
  if (iVar4 == 0) {
    return;
  }
  switch(local_28[0]) {
  case 0:
    return;
  case 1:
    goto LAB_03801328;
  case 2:
    uVar3 = 0x3f00;
    break;
  case 3:
    uVar3 = 0xc000;
    break;
  case 4:
LAB_03801328:
    uVar3 = 0xffff;
    break;
  default:
    goto switchD_0380130c_default;
  }
  iVar4 = FUN_037ffea4(uVar3 & *(ushort *)(param_1 + 0x1e),
                       (uint)*(byte *)(param_2 + 4) + (uint)param_1[0x12],*param_1 >> 7,FUN_03801654
                       ,param_1);
  if (iVar4 != 0) {
    iVar2 = FUN_03802464(iVar4,param_3,param_4);
    if (iVar2 == 0) {
      *(undefined1 *)(iVar4 + 0x22) = 0;
      FUN_037ffe90(iVar4);
    }
    else {
      *(undefined4 *)(iVar4 + 0x50) = *(undefined4 *)(param_1 + 0x3c);
      *(int *)(param_1 + 0x3c) = iVar4;
LAB_038013d4:
      if (param_1[0xe] != 0xff) {
        FUN_03800038(iVar4);
      }
      if (param_1[0xf] != 0xff) {
        FUN_0380001c(iVar4);
      }
      if (param_1[0x10] != 0xff) {
        FUN_03800014(iVar4);
      }
      if (param_1[0x11] != 0xff) {
        FUN_037ffff8(iVar4);
      }
      *(undefined2 *)(iVar4 + 0x32) = *(undefined2 *)(param_1 + 0x16);
      if ((*param_1 & 0x3f) >> 5 != 0) {
        *(short *)(iVar4 + 0x32) =
             *(short *)(iVar4 + 0x32) + (short)(((uint)param_1[0x14] - param_3) * 0x400000 >> 0x10);
      }
      uVar1 = (uint)param_1[0x15];
      if (uVar1 == 0) {
        *(undefined4 *)(iVar4 + 0x18) = param_5;
        *(byte *)(iVar4 + 3) = *(byte *)(iVar4 + 3) & 0xfb;
      }
      else {
        iVar2 = (int)*(short *)(iVar4 + 0x32);
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        *(int *)(iVar4 + 0x18) = (int)(uVar1 * uVar1 * iVar2) >> 0xb;
      }
      *(undefined4 *)(iVar4 + 0x14) = 0;
    }
  }
switchD_0380130c_default:
  return;
}

