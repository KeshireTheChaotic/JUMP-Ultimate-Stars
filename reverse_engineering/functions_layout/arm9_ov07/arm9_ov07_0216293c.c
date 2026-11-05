
undefined4 FUN_0216293c(void)

{
  undefined4 uVar1;
  undefined4 *unaff_r4;
  undefined1 uStack00000000;
  
  _uStack00000000 = 0x80000;
  (**(code **)(**(int **)(unaff_r4[1] + 4) + 0xa0))(*(int **)(unaff_r4[1] + 4),&uStack00000000);
  FUN_02027834(*(undefined4 *)(unaff_r4[1] + 4),8,FUN_021629dc);
  FUN_02158d7c(unaff_r4[1]);
  FUN_020882e0();
  FUN_02088330();
  uVar1 = CommuMenuCmnMemberEnt::CommuMenuCmnMemberEnt_Add(unaff_r4 + 3);
  unaff_r4[0x2a] = uVar1;
  return *unaff_r4;
}

