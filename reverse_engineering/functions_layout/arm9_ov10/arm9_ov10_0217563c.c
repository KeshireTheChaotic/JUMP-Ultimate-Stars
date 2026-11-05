
uint FUN_0217563c(int param_1,int param_2,undefined1 *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int extraout_r1;
  int extraout_r1_00;
  undefined1 *puVar3;
  int iVar4;
  byte local_1c;
  byte local_1b;
  byte local_1a;
  
  FUN_0200d338(param_2,3);
  if (extraout_r1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = 4;
  }
  iVar1 = FUN_0200d338(param_2,3);
  uVar2 = iVar1 * 4 + iVar4;
  if (param_3 != (undefined1 *)0x0) {
    if (param_4 < uVar2) {
      return 0xffffffff;
    }
    param_2 = param_1 + param_2;
    puVar3 = param_3;
    for (; param_1 != param_2; param_1 = param_1 + iVar1) {
      iVar1 = param_2 - param_1;
      FUN_0200d12c(iVar1 * 8,6);
      iVar4 = FUN_0200d12c(iVar1 * 8,6);
      iVar4 = iVar4 + (uint)(extraout_r1_00 != 0);
      if (2 < iVar1) {
        iVar1 = 3;
      }
      FUN_020517fc(&local_1c,0,3);
      FUN_02051890(param_1,&local_1c,iVar1);
      *puVar3 = *(undefined1 *)(DAT_021a3e0c + ((int)(uint)local_1c >> 2));
      if (iVar4 < 2) {
        puVar3[1] = 0x2a;
      }
      else {
        puVar3[1] = *(undefined1 *)(DAT_021a3e0c + ((local_1c & 3) << 4 | (int)(uint)local_1b >> 4))
        ;
      }
      if (iVar4 < 3) {
        puVar3[2] = 0x2a;
      }
      else {
        puVar3[2] = *(undefined1 *)
                     (DAT_021a3e0c + ((local_1b & 0xf) << 2 | (int)(uint)local_1a >> 6));
      }
      if (iVar4 < 4) {
        puVar3[3] = 0x2a;
      }
      else {
        puVar3[3] = *(undefined1 *)(DAT_021a3e0c + (local_1a & 0x3f));
      }
      puVar3 = puVar3 + 4;
    }
    uVar2 = (int)puVar3 - (int)param_3;
  }
  return uVar2;
}

