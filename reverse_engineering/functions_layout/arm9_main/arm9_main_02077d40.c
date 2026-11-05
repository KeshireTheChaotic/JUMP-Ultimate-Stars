
void FUN_02077d40(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_2 + 0x3c);
  if ((uVar2 & 0x4000) == 0) {
    if ((uVar2 & 0x1000) == 0) {
      if ((uVar2 & 1) == 0) {
        *(ushort *)(param_2 + 0x18) = *(short *)(param_2 + 0x18) + (ushort)*(byte *)(param_2 + 0x49)
        ;
        if (*(short *)(param_2 + 0x16) < *(short *)(param_2 + 0x18)) {
          *(short *)(param_2 + 0x18) = *(short *)(param_2 + 0x16);
        }
      }
      else {
        iVar1 = (**(code **)(param_1 + 0x5e8))
                          (param_1,*(undefined4 *)(param_1 + 0x5ec),0xc,0,0,0,param_4);
        if (iVar1 != 0) {
          if (*(byte *)(param_2 + 0x4a) != 0) {
            *(ushort *)(param_2 + 0x18) =
                 *(short *)(param_2 + 0x18) + (ushort)*(byte *)(param_2 + 0x4a);
            iVar1 = (int)*(short *)(param_2 + 0x18);
            if (*(short *)(param_2 + 0x16) < iVar1) {
              *(short *)(param_2 + 0x18) = *(short *)(param_2 + 0x16);
            }
          }
          iVar3 = (int)*(char *)(param_2 + 0x4b);
          if (iVar3 == 0) {
            iVar1 = (int)*(char *)(param_2 + 0x4c);
          }
          if (iVar3 != 0 || iVar1 != 0) {
            FUN_020781e4(param_1,iVar3 + *(char *)(param_2 + 0x4c));
          }
        }
      }
    }
    else if (((uVar2 & 0x2000) == 0) &&
            (((uVar2 & 1) == 0 ||
             (iVar1 = (**(code **)(param_1 + 0x5e8))
                                (param_1,*(undefined4 *)(param_1 + 0x5ec),0xc,0,0,0), iVar1 != 0))))
    {
      *(ushort *)(param_2 + 0x18) =
           *(short *)(param_2 + 0x18) + (ushort)*(byte *)(param_2 + 0x49) * 2;
      if (*(short *)(param_2 + 0x16) < *(short *)(param_2 + 0x18)) {
        *(short *)(param_2 + 0x18) = *(short *)(param_2 + 0x16);
        *(uint *)(param_2 + 0x3c) = *(uint *)(param_2 + 0x3c) & 0xffffefff;
      }
    }
  }
  return;
}

