
/* WARNING: Removing unreachable block (ram,0x021b06ae) */
/* JUS-GAME ALCollision::Init [source-string] __FILE__="ALCollision.cpp" __FUNCTION__="Init"
   lines=[153, 154, 155, 156, 157, 158] passed to 7 source-location call(s) */

void ALCollision::Init(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 in_r3;
  
  if (DAT_021d5130 == (int *)0x0) {
    piVar1 = (int *)thunk_FUN_0201a228(0x24,s_ALCollision_cpp_021d25e0,&DAT_021d1828,0x99,in_r3);
    if (piVar1 != (int *)0x0) {
      PropBindInstance_02095200::PropBindInstance_02095200(piVar1,0);
      *piVar1 = (int)&ALCollision_Part_021d1b18::vftable;
      puVar2 = (undefined4 *)
               thunk_FUN_0201a228(0x14,s_ALPropSetImp_h_021d190c,&DAT_021d1868,0x1f9,in_r3);
      if (puVar2 != (undefined4 *)0x0) {
        jus_Class_02098708::jus_Class_02098708(puVar2,s_Collision_021d25fc,&LAB_021d25f0);
        *puVar2 = &ALCollision_021d1e9c::vftable;
      }
      piVar1[8] = (int)puVar2;
    }
    DAT_021d5130 = piVar1;
    puVar2 = (undefined4 *)
             thunk_FUN_0201a228(0x14,s_ALCollision_cpp_021d25e0,&DAT_021d1828,0x9a,in_r3);
    if (puVar2 != (undefined4 *)0x0) {
      ALCollision_02099c4c::ALCollision_02099c4c(puVar2,s_ShapeID_021d1890,&DAT_021d1888);
      *puVar2 = &jus_Prop_ShapeID::vftable;
    }
    (**(code **)(*DAT_021d5130 + 0x3c))(DAT_021d5130,puVar2);
    puVar2 = (undefined4 *)thunk_FUN_0201a228(0x14,s_ALCollision_cpp_021d25e0,&DAT_021d1828,0x9b);
    if (puVar2 != (undefined4 *)0x0) {
      ALCollision_02099c4c::ALCollision_02099c4c(puVar2,s_Attribute_021d18bc,&DAT_021d1850);
      *puVar2 = &jus_Prop_Attribute::vftable;
    }
    (**(code **)(*DAT_021d5130 + 0x3c))(DAT_021d5130,puVar2);
    puVar2 = (undefined4 *)thunk_FUN_0201a228(0x14,s_ALCollision_cpp_021d25e0,&DAT_021d1828,0x9c);
    if (puVar2 != (undefined4 *)0x0) {
      ALCollision_02099c4c::ALCollision_02099c4c(puVar2,&DAT_021d1858,&DAT_021d1840);
      *puVar2 = &jus_Prop_Kind::vftable;
    }
    (**(code **)(*DAT_021d5130 + 0x3c))(DAT_021d5130,puVar2);
    puVar2 = (undefined4 *)thunk_FUN_0201a228(0x68,s_ALCollision_cpp_021d25e0,&DAT_021d1828,0x9d);
    if (puVar2 != (undefined4 *)0x0) {
      jus_Class_02098708::jus_Class_02098708(puVar2,s_Position_021d1898,&DAT_021d1838);
      *puVar2 = &jus_Class_02098078::vftable;
      ALCollision_02098318::ALCollision_02098318(puVar2 + 5,&DAT_021d181c,0);
      puVar2[5] = &PTR_LAB_021d2094;
      ALCollision_02098318::ALCollision_02098318(puVar2 + 0xc,&DAT_021d1820,1);
      puVar2[0xc] = &PTR_FUN_021d1fec;
      ALCollision_02098318::ALCollision_02098318(puVar2 + 0x13,&DAT_021d1824,2);
      puVar2[0x13] = &PTR_vfunc_42_021d1f44;
      puVar2[0xb] = puVar2;
      puVar2[0x12] = puVar2;
      puVar2[0x19] = puVar2;
      *puVar2 = &ALCollision_Part_021d21e4::vftable;
    }
    (**(code **)(*DAT_021d5130 + 0x3c))(DAT_021d5130,puVar2);
    puVar2 = (undefined4 *)thunk_FUN_0201a228(0x14,s_ALCollision_cpp_021d25e0,&DAT_021d1828,0x9e);
    if (puVar2 != (undefined4 *)0x0) {
      ALCollision_02099c4c::ALCollision_02099c4c(puVar2,s_Enable_021d1880,&DAT_021d1870);
      *puVar2 = &jus_Prop_Enable::vftable;
    }
    (**(code **)(*DAT_021d5130 + 0x3c))(DAT_021d5130,puVar2);
    puVar2 = (undefined4 *)thunk_FUN_0201a228(0x1c,s_ALCollision_cpp_021d25e0,&DAT_021d1828,0xa0);
    if (puVar2 != (undefined4 *)0x0) {
      ALCollision_02094f78::ALCollision_02094f78(puVar2,0);
      *puVar2 = &ALCollision_Part_021d1ac0::vftable;
    }
    DAT_021d512c = 0;
    DAT_021d5134 = puVar2;
  }
  return;
}

