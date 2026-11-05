
undefined4 FUN_02159ac0(int param_1,int param_2)

{
  ushort uVar1;
  
  if ((*(ushort *)(param_2 + 0xa88) & 1) != 0) {
    FUN_020735e4();
  }
  if (*(byte *)(param_1 + 4) == 6) {
    FUN_0207367c(*(undefined1 *)(param_1 + 5));
    uVar1 = *(ushort *)(param_2 + 0xa88) & 0xfffe;
  }
  else {
    FUN_020734e0(*(undefined4 *)(&DAT_0215c5f4 + (uint)*(byte *)(param_1 + 4) * 4));
    FUN_0207361c(*(undefined4 *)(&DAT_0215c60c + (uint)*(byte *)(param_1 + 4) * 4),
                 *(undefined1 *)(param_1 + 5));
    uVar1 = *(ushort *)(param_2 + 0xa88) | 1;
  }
  *(ushort *)(param_2 + 0xa88) = uVar1;
  return 0;
}

