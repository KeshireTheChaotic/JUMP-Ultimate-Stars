
void FUN_0217e7b0(int param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_20 [3];
  
  iVar3 = DAT_021a7d10 + param_1 * 0x30;
  uVar1 = FUN_0217e948();
  *(undefined1 *)(iVar3 + 0x1e) = uVar1;
  uVar2 = FUN_0217ebb8(param_2);
  if (uVar2 < 5) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar2) {
    case 1:
      if (param_3 != 8) {
        return;
      }
      FUN_02051890(param_2,local_20,8);
      *(undefined4 *)(iVar3 + 0x18) = local_20[0];
      *(undefined4 *)(iVar3 + 0x10) = 0;
      if ((*(int *)(iVar3 + 4) == 0) || (*(int *)(iVar3 + 8) < *(int *)(iVar3 + 0x18))) {
        *(undefined1 *)(iVar3 + 0x1d) = 4;
      }
      else {
        *(undefined1 *)(iVar3 + 0x1d) = 2;
      }
      break;
    case 2:
      *(undefined1 *)(iVar3 + 0x1d) = 3;
    }
  }
  *(short *)(iVar3 + 0x22) = (short)uVar2;
  return;
}

