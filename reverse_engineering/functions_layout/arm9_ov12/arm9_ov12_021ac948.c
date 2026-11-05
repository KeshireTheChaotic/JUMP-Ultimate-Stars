
/* JUS-GAME ALWidget::MakeFitCollision [source-string] __FILE__="ALWidget.cpp"
   __FUNCTION__="MakeFitCollision" lines=[66] passed to 1 source-location call(s) */

void ALWidget::MakeFitCollision(int *param_1)

{
  undefined4 *puVar1;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  undefined2 local_12;
  
  puVar1 = (undefined4 *)
           jus_AllocDebug(0x70,s_ALWidget_cpp_021d17d4,s_MakeFitCollision_021d1768,0x42);
  if (puVar1 != (undefined4 *)0x0) {
    local_12 = *(undefined2 *)((int)param_1 + 0xce);
    local_14 = (undefined2)param_1[0x33];
    local_18 = 0;
    local_16 = 0;
    jus_Class_021d1be8::jus_Class_021d1be8(puVar1,0,&DAT_02093c8c);
    *puVar1 = &ALCollision_021d0a1c::vftable;
    FUN_021ac9b0(puVar1 + 0x1a,&local_18);
    *puVar1 = &ALCollisionImp::vftable;
  }
  (**(code **)(*param_1 + 0xf0))(param_1,puVar1);
  return;
}

